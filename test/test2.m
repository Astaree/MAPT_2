x = (-4:0.02:4);

y1 = func1(x);
y2 = func2(x);

subplot(1,2,1)
plot(x,y1)
title("y1");
xlabel("step: [x]");
ylabel("value: [y]");
grid("on")
legend("x ^ 2 + x + 1")


subplot(1,2,2)
plot(x,y2)
title("y2");
xlabel("step: [x]");
ylabel("value: [y]");
grid("on")
legend("y = x^3 + x^2 + x + 1")