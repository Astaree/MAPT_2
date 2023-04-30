
% autoformatting: Ctrl + a, Ctrl + i( of the whole selected part)/ autoformatowanie: Ctrl+a, Ctrl+i (ca³oœci zaznaczonego fragmentu)
% % - commenting on the fragment to the right of the character/ komentowanie fragmentu po prawej od znaku 
% Ctrl+R, commenting the entire selected part/komentowanie zaznaczonego fragmentu kodu
% Ctrl+T, uncommenting the entire selected part/odkomentowanie zaznaczonego fragmentu kodu
% F9 - runnig the chosen part of the code/ uruchomienie zaznaczonego fragment kodu
% clc - czyszczenie command window/cleaning command window
% clear all - Workspace cleaning/czyszczenie Workspace
% close all - closing all of the opened figures/zamknicie wszystkich otwartych figur

clear all; close all

% basic types of variables and their conversion
% podstawowe typy zmiennych i ich konwersja

a = 1
b = 2.0
c = 'f'
d = -12.5787990934553
format long % setting the numbers displaing mode to long format/ ustawienie wyœwietlania liczb w d³ugim formacie
d
d1 = single(d)
d2 = int8(d)
d3 = uint8(d)

dr = round(d)
dc = ceil(d)
df = floor(d)

format short % setting the numbers displaing mode to short format/ ustawienie wyœwietlania liczb w krótkim formacie

% podstawowe operacje arytmetyczne
% basic arithmetic operations
aa = a + a
bb = b*b
dd = d/b
ff = b^2
gg = b^(0.5)
ii = sqrt(b)
cc = c - 5
