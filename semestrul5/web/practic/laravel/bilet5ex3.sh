#!/bin/sh

# E de ajuns sa rulati comenzile de aici sau scriptul
# pentru a genera proiectul laravel
# aveti nevoie de composer instalat
# Aici setati datele de conectare la DB, baza de date trebuie sa existe deja, tabela NU!
export DB_DATABASE='laravel'
export DB_USERNAME='root'
export DB_PASSWORD=''
# Se creaza proiectul
composer create-project laravel/laravel autentificare
cd autentificare/
# Cream rutele si view-urile de autentificare
php artisan make:auth
# Rulam migrarile care adauga tabela users in DB
php artisan migrate
# Servim aplicatia pe localhost:8000
php artisan serve
