#include "complextion.h"

complex * dit_fft(complex a[],int n);

complex * idft(complex a[],int n);

//complex * fft_1(short a[],short b[],int n,complex * p);//һ��N���fftͬʱ��������N��ʵ���У�
//
//complex * fft_2(short a[],int n);//һ��N���fft����һ��2N���ʵ���У�
//
//short * conv(short a[],int length1,short b[],int length2);//2�������еľ��

complex * fft_1(double a[],double b[],int n,complex * p);//һ��N���fftͬʱ��������N��ʵ���У�

complex * fft_2(double a[],int n);//һ��N���fft����һ��2N���ʵ���У�

double * conv(double a[],int length1,double b[],int length2);//2�������еľ��

int binary(int num);