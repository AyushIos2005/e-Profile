// script.js
function gcd(a, b) {
  while (b !== 0) {
    let temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

function showToast(message, duration = 3000) {
  const toast = document.getElementById("toast");
  toast.textContent = message;
  toast.classList.add("show");
  setTimeout(() => toast.classList.remove("show"), duration);
}

const scoreEl = document.getElementById("score");
const questionEl = document.getElementById("question");
const questionForm = document.getElementById("Questionform");
const timerEl = document.getElementById("timer");
const attemptCounter = document.getElementById("attempts");
const nameGreeting = document.getElementById("userGreeting");
const formScreen = document.getElementById("userFormScreen");
const quizScreen = document.getElementById("quizScreen");
const endScreen = document.getElementById("endScreen");
const userForm = document.getElementById("userForm");
const finalScore = document.getElementById("finalScore");

let storeanswer;
let score = 0;
let totalAttempted = 0;
let questionCount = 0;
const maxQuestions = 10;
let isSSCChallenge = false;
let userName = localStorage.getItem("username") || "";
let userEmail = localStorage.getItem("email") || "";
let countdown;
let timeLimit = 20;

userForm.addEventListener("submit", function (e) {
  e.preventDefault();
  const name = document.getElementById("playerName").value.trim();
  const email = document.getElementById("playerEmail").value.trim();

  if (name && email) {
    userName = name;
    userEmail = email;
    localStorage.setItem("username", userName);
    localStorage.setItem("email", userEmail);

    nameGreeting.textContent = `👋 Welcome, ${userName}`;
    formScreen.style.display = "none";
    quizScreen.style.display = "grid";

    resetQuiz();
    showQuestion();
  }
});

const randomNumber = (min, max) =>
  Math.floor(Math.random() * (max - min + 1)) + min;

const isPerfectSquare = (num) => Number.isInteger(Math.sqrt(num));
const isPerfectCube = (num) => Number.isInteger(Math.cbrt(num));

const generateQuestion = () => {
  let num1 = isSSCChallenge ? randomNumber(100, 500) : randomNumber(1, 50);
  let num2 = isSSCChallenge ? randomNumber(50, 300) : randomNumber(1, 50);
  let type = randomNumber(1, 10);

  let question, answer;

  switch (type) {
    case 1:
      question = `What is ${num1} multiplied by ${num2}?`;
      answer = num1 * num2;
      break;
    case 2:
      question = `What is ${num1} plus ${num2}?`;
      answer = num1 + num2;
      break;
    case 3:
      question = `What is ${num1} divided by ${num2}?`;
      answer = num2 !== 0 ? (num1 / num2).toFixed(2) : "undefined";
      break;
    case 4:
      question = `What is ${num1} minus ${num2}?`;
      answer = num1 - num2;
      break;
    case 5:
      question = `What is the remainder when ${num1} is divided by ${num2}?`;
      answer = num2 !== 0 ? num1 % num2 : "undefined";
      break;
    case 6:
      while (!isPerfectSquare(num1)) num1 = randomNumber(1, 100);
      question = `What is the square root of ${num1}?`;
      answer = Math.sqrt(num1);
      break;
    case 7:
      while (!isPerfectCube(num1)) num1 = randomNumber(1, 100);
      question = `What is the cube root of ${num1}?`;
      answer = Math.cbrt(num1);
      break;
    case 8:
      question = `How many seconds in ${num1} minute(s)?`;
      answer = num1 * 60;
      break;
    case 9:
      question = `How many seconds in ${num1} hour(s)?`;
      answer = num1 * 3600;
      break;
    case 10:
      question = `What is the HCF of ${num1} and ${num2}?`;
      answer = gcd(num1, num2);
      break;
  }

  return { question, answer };
};

const showQuestion = () => {
  clearInterval(countdown);

  if (questionCount >= maxQuestions) {
    showEndScreen();
    return;
  }

  const { question, answer } = generateQuestion();
  storeanswer = answer;
  questionCount++;

  questionEl.textContent = "Q. " + question;
  scoreEl.textContent = score;
  attemptCounter.textContent = `📝 Attempted: ${totalAttempted}`;

  let timeLeft = timeLimit;
  timerEl.textContent = `⏱ Time left: ${timeLeft}s`;

  countdown = setInterval(() => {
    timeLeft--;
    timerEl.textContent = `⏱ Time left: ${timeLeft}s`;

    if (timeLeft <= 0) {
      clearInterval(countdown);
      showToast("⛔ Time's up!");
      score -= 1;
      totalAttempted++;
      updateStats();
      showQuestion();
    }
  }, 1000);
};

const checkAnswer = (event) => {
  event.preventDefault();
  clearInterval(countdown);

  const formData = new FormData(questionForm);
  const userAnswer = formData.get("answer").trim();

  const isCorrect =
    Math.abs(Number(userAnswer) - Number(storeanswer)) < 0.01;

  if (isCorrect) {
    score += 2;
    showToast("✅ Correct!! 😊");
  } else {
    score -= 1;
    showToast("❌ Incorrect!! 😒");
  }

  totalAttempted++;
  updateStats();
  event.target.reset();
  showQuestion();
};

const updateStats = () => {
  scoreEl.textContent = score;
  attemptCounter.textContent = `📝 Attempted: ${totalAttempted}`;
};

const resetQuiz = () => {
  score = 0;
  totalAttempted = 0;
  questionCount = 0;
};

const showEndScreen = () => {
  clearInterval(countdown);
  quizScreen.style.display = "none";
  endScreen.style.display = "grid";

  if (score === maxQuestions * 2 && !isSSCChallenge) {
    finalScore.innerHTML = `🎉 <strong>${userName}, you cleared all 10 questions without any mistakes!</strong><br><br>Do you want to attempt SSC-level challenge questions?<br><br><button class="primary-btn" onclick="startSSCChallenge()">Yes, Challenge Me</button><button class="primary-btn" onclick="exitQuiz()">No, Exit</button>`;
  } else {
    finalScore.innerText = `${userName}, your final score is: ${score}`;
  }
};

function startSSCChallenge() {
  isSSCChallenge = true;
  resetQuiz();
  endScreen.style.display = "none";
  quizScreen.style.display = "grid";
  nameGreeting.textContent = `💪 SSC Mode: Good luck, ${userName}`;
  showQuestion();
}

function restartQuiz() {
  isSSCChallenge = false;
  resetQuiz();
  endScreen.style.display = "none";
  quizScreen.style.display = "grid";
  nameGreeting.textContent = `👋 Welcome, ${userName}`;
  showQuestion();
}

function exitQuiz() {
  endScreen.style.display = "none";
  showToast(`Thanks for playing, ${userName}!`);
}
