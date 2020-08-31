% print the message requesting the info and assign the value to F
% define and declare F as an integer
F = int16( input('Enter temperature(F): '));

% perform the calculation
C = (F - 32) * 5 / 9;

% print the result
fprintf("The entered temperature in C is: %d\n", C)