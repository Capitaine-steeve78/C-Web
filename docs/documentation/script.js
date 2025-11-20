const toggleBtn = document.querySelector('.menu-toggle');
const menuLinks = document.querySelector('.menu-links');

// Ouvre ou ferme le menu
toggleBtn.addEventListener('click', (e) => {
  e.stopPropagation(); // 🔥 empêche de déclencher l'événement global
  menuLinks.classList.toggle('active');
});

// Ferme le menu quand on clique sur un lien
menuLinks.querySelectorAll('a').forEach(link => {
  link.addEventListener('click', () => {
    menuLinks.classList.remove('active');
  });
});

// Ferme le menu si on clique ailleurs sur la page
document.addEventListener('click', (e) => {
  // Si le menu est ouvert ET que le clic n'est pas dans le menu ni sur le bouton
  if (menuLinks.classList.contains('active') &&
      !menuLinks.contains(e.target) &&
      !toggleBtn.contains(e.target)) {
    menuLinks.classList.remove('active');
  }
});
