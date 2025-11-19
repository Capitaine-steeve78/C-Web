const toggleBtn = document.querySelector('.menu-toggle');
const menuLinks = document.querySelector('.menu-links');

toggleBtn.addEventListener('click', (e) => {
  e.stopPropagation();
  menuLinks.classList.toggle('active');
});

menuLinks.querySelectorAll('a').forEach(link => {
  link.addEventListener('click', () => {
    menuLinks.classList.remove('active');
  });
});

document.addEventListener('click', (e) => {
  if (menuLinks.classList.contains('active') &&
      !menuLinks.contains(e.target) &&
      !toggleBtn.contains(e.target)) {
    menuLinks.classList.remove('active');
  }
});

