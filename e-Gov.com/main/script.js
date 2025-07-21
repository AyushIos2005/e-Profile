// Open and Close Login Popup
function openLogin() {
    const popup = document.getElementById('login-popup');
    popup.classList.add('show');
}

function closeLogin() {
    const popup = document.getElementById('login-popup');
    popup.classList.remove('show');
}

// Scroll-to-Top Button
const topBtn = document.querySelector('.top-btn');
window.addEventListener('scroll', () => {
    if (window.scrollY > 300) {
        topBtn.classList.add('show');
    } else {
        topBtn.classList.remove('show');
    }
});

function scrollToTop() {
    window.scrollTo({ top: 0, behavior: 'smooth' });
}

// Fade-in Animations on Scroll
const faders = document.querySelectorAll('.fade-in');

window.addEventListener('scroll', () => {
    faders.forEach(element => {
        const rect = element.getBoundingClientRect();
        if (rect.top < window.innerHeight - 100) {
            element.classList.add('show');
        }
    });
});

// Initial Fade-in
window.addEventListener('load', () => {
    faders.forEach(element => {
        const rect = element.getBoundingClientRect();
        if (rect.top < window.innerHeight - 100) {
            element.classList.add('show');
        }
    });
});
