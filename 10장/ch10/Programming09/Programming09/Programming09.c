#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define SIZE 10

double mean(double data[], int dev);
double Sdeviation(double data[], int dev, double m);

int main(void) {
	double data[SIZE];
	int N=0;
	double m;

	for (int i = 0; i < SIZE; i++) {
		printf("�����͸� �Է��Ͻÿ�: ");
		scanf("%lf", &data[i]);
		++N;
	}

	m = mean(data, N);
	printf("��հ��� %lf\n", m);
	printf("ǥ���������� %lf\n", Sdeviation(data, N, m));

	return 0;
}

double mean(double data[], int dev) {
	double sum=0;

	for (int i = 0; i < SIZE; i++) {
		sum += data[i];
	}

	return (sum / dev);
}
double Sdeviation(double data[], int dev, double m) {
	double sum = 0;

	for (int i = 0; i < SIZE; i++) {
		sum += pow((data[i]-m),2)/dev;
	}

	return sqrt(sum);
}