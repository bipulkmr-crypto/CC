// // A1=1.0;
// // A2=2;
// // A3=3;
// // f1=30;f2=40;f3=89;
// // fs=100;
// // t=0:1/fs:1;
// // x=A1*(cos(2*pi*f1*t+pi/4))+A2*sin(2*pi*f2*t+pi/3)-A3*cos(2*pi*f3*t+pi/6);
// // X1=fft(x);
// // X2=abs(X1);
// // X3=fftshift(X2);
// // …nitude  response Centre');
// // subplot(2, 4, 5),plot(c1,X1);
// // xlabel('frequency'),ylabel('Magnitude'),title('Two sided Response'); 
// // subplot(2,4,6),plot(c1,X2);
// // xlabel('frequency'),ylabel('Magnitude'),title('Two sided Magnitude Response');
// // subplot(2, 4 ,7),plot(c1,X3);
// // xlabel('frequency '),ylabel('Magnitude'),title('Two sided Magnitude Response Center');
// // subplot(2, 4, 8),plot(c1,z,'-r’,c,z,’–g');
// // legend('Two sided','one sided')
// // xlabel('frequency'),ylabel('Magnitude'),title('Two sided Phase Response');
// A1=1;
// A2=2;
// A3=1;
// f1=10;
// f2=20;
// f3=30;
// fs =200;t=0:1/fs:1;
// x = A1 * cos(2 * pi * f1 * t+pi/3)+A2 *sin(2 * pi * f2 * t+pi/4)-A3 * cos(2 * pi * f3 * t+pi/6);
// X1 = fft(x);
// X2=abs(X1);
// X3=fftshift(X2);
// z=phase(X1);
// n = length(x);
// c = 0:fs / n:fs - fs / n;
// c1 = -fs/2:fs / n:fs/2 - fs / n;
// subplot(2, 4, 1),plot(t,x);
// xlabel('time'),ylabel('amplitude'),title('Time Domain Representation of 3 Tone Signals');
// subplot(2, 4, 2),plot(c,X1);
// xlabel('frequency'),ylabel('Magnitude'),title('One sided Response');
// subplot(2, 4 ,3),plot(c,X2);
// xlabel('frequency'),ylabel('Magnitude'),title('One sided Magnitude Response');
// subplot(2, 4 ,4),plot(c,X3);
// xlabel('frequency'),ylabel('Magnitude'),title('One sided Magnitude Response Centre');
// subplot(2, 4, 5),plot(c1,X1);
// xlabel('frequency'),ylabel('Magnitude'),title('Two sided Response');
// subplot(2,4,6),plot(c1,X2);
// xlabel('frequency'),ylabel('Magnitude'),title('Two sided Magnitude Response');
// subplot(2, 4 ,7),plot(c1,X3);
// xlabel('frequency'),ylabel('Magnitude'),title('Two sided Magnitude Response Center');
// subplot(2, 4, 8),plot(c1,z,'-r',c,z,'-g')
// legend('Two sided’,’one sided')
// xlabel('frequency'),ylabel('Magnitude'),title('Two sided Phase Response');
A1=1;
A2=2;
A3=1;
f1=10;
f2=20;
f3=30;
fs =200;t=0:1/fs:1;
x = A1 * cos(2 * pi * f1 * t+pi/3)+A2 *sin(2 * pi * f2 * t+pi/4)-A3 * cos(2 * pi * f3 * t+pi/6);
X1 = fft(x);
X2=abs(X1);
X3=fftshift(X2);
z=phase(X1);
n = length(x);
c = 0:fs / n:fs - fs / n;
c1 = -fs/2:fs / n:fs/2 - fs / n;
subplot(2, 4, 1),plot(t,x);
xlabel('time'),ylabel('amplitude'),title('Time Domain Representation of 3 Tone Signals');
subplot(2, 4, 2),plot(c,X1);
xlabel('frequency'),ylabel('Magnitude'),title('One sided Response');
subplot(2, 4, 3),plot(c1,X1);
xlabel('frequency'),ylabel('Magnitude'),title('Two sided Response');