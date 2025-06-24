var main= document.getElementById("main");
var s=""
let arr=["https://i.pinimg.com/736x/e7/69/a2/e769a266ff49fcca07ee75066ed53dc3.jpg",
"https://i.pinimg.com/736x/ad/0a/38/ad0a38b8fcab6ed8fce7d260f427ca0b.jpg",
"https://i.pinimg.com/736x/fb/3a/41/fb3a41cb36290985fbbd86ad11a2bcc5.jpg",
" https://i.pinimg.com/736x/b5/34/7f/b5347fc109485f34b3c918b768e91dc1.jpg",
"https://i.pinimg.com/736x/e8/5a/23/e85a23cabd8e7735ea4dfb0711f31bcc.jpg",
"https://i.pinimg.com/736x/20/ae/78/20ae782d94af3464f6361a00cb9f2337.jpg",
"https://i.pinimg.com/736x/74/d6/0b/74d60b6cd140a85c95c8ce7d3aff5aaa.jpg","https://i.pinimg.com/736x/c4/2d/8c/c42d8cc47fe81b4ffa13b3806ce58360.jpg","https://i.pinimg.com/736x/c2/18/c9/c218c95a43804c0cb13ae43809cf5142.jpg","https://i.pinimg.com/736x/2c/93/9e/2c939e2174aad2501128d081bb4a7ea1.jpg","https://i.pinimg.com/736x/1e/d5/d7/1ed5d7e3d603232582b80d88cbd7500e.jpg","https://i.pinimg.com/736x/bf/ab/e3/bfabe35a50e1ccd5441c24c06c2f5fa8.jpg","https://i.pinimg.com/736x/be/77/90/be7790110fefe32f326d22d6903af88a.jpg","https://i.pinimg.com/736x/66/c0/e5/66c0e532c91dbee10d21253db32c906d.jpg","https://i.pinimg.com/736x/9d/33/28/9d33288070f26522544339c03e0b8cd9.jpg"];

 for(let i=1;i<=54;i++){
    let r=Math.floor(Math.random()*arr.length);
    s+=` <div class="card"><img src="${arr[r]}"></div>`;
 }
 main.innerHTML=s;


// "https://i.pinimg.com/736x/e7/69/a2/e769a266ff49fcca07ee75066ed53dc3.jpg",
// "https://i.pinimg.com/736x/ad/0a/38/ad0a38b8fcab6ed8fce7d260f427ca0b.jpg",
// "https://i.pinimg.com/736x/fb/3a/41/fb3a41cb36290985fbbd86ad11a2bcc5.jpg",
// " https://i.pinimg.com/736x/b5/34/7f/b5347fc109485f34b3c918b768e91dc1.jpg",
// "https://i.pinimg.com/736x/e8/5a/23/e85a23cabd8e7735ea4dfb0711f31bcc.jpg",
// "https://i.pinimg.com/736x/20/ae/78/20ae782d94af3464f6361a00cb9f2337.jpg",
// "https://i.pinimg.com/736x/74/d6/0b/74d60b6cd140a85c95c8ce7d3aff5aaa.jpg"
// https://i.pinimg.com/736x/58/47/a3/5847a33903b1cd801f06d9f978e21712.jpg