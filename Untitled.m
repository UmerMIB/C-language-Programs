clear all; 
close all;
clc;
[y,Fs,bits]= wavread('tone.wav');
n = [0:length(y)-1];  
Ts = 1/Fs;
t = n.*Ts; 
k = n;
Df = Fs./length(y); % Frequency resolution
F = k.*Df; % Analysis frequencies 
Y = fft(y); 
magY = abs(Y);  
sound(y,Fs);
plot(t,y);
grid;
xlabel('time(sec)');
ylabel('Amplitude'); 
figure,
subplot(2,1,1); 
plot(F,magY);
grid on; 
xlim([0 Fs/2]); 
xlabel('Frequency (Hz)');
ylabel('DFT Magnitude'); 
title('Discrete Fourier Transform'); 
subplot(2,1,2);
plot(F,magY);
grid on; 
xlim([0 2000]);
xlabel('Frequency (Hz)');
ylabel('DFT Magnitude'); 
title('Discrete Fourier Transform'); 