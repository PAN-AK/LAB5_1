#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846
void zdn2()
{
	setlocale(LC_ALL, "RUS");
	float y, x, b, p, a;
	p = 2.6;
	printf("¬ведите х:");
	scanf_s("%f", &x);
	a = pow(p, 3) + pow(x, 3);
	b = exp(pow(p + x, 1. / 2));
	y = pow(b, 3) / pow(a, 2);
	printf("\na = %f", a);
	printf("\nb = %f", b);
	printf("\ny = %.2f", y);

	int A = (int)a;
	int B = (int)b;
	int C = (int)y;

	printf("\n%d", (A + B) % 2);
	printf("\n%d", (((A + B + C) + 1) % 3) % 2);








}


void main()
{
	zdn2();
	setlocale(LC_ALL, "RUS");
	float gr;
	printf("\n¬ведите градусы:");
	scanf_s("%f", &gr);
	float rad = gr * M_PI / 180;
	float res = sin(rad);

	printf("—инус %f градусов  = %f", gr, res);


}