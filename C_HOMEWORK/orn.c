//#define _USE_MATH_DEFINES
//#include <math.h>
//#include <time.h>

//GEN_MAX_FN(int)

///f_utility.h
//#undef LOG //macroyu sil

/*
void assert_that(int cond)
{
	assert(cond);
}

void print_predefined(void)
{
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
	printf("%s\n", __FILE__);

#ifdef _cplusplus__
#error ERROR C++ COMPILER
#elif __STDC__
#if LOG
#define LOG(x) ((void)printf("$LOG : %d\n", x))
#else
#define LOG(x)  (x)
#endif // LOG
#endif

#line 666 "devil.c"
	abort();
	exit(0);
}
*/
///f_utility.h

///f_utility.c
/*
typedef struct
{
	struct tm now;

	void (*delete)(f_time_t* f_time);

	void (*now) (f_time_t* this);

} f_time_t;


f_time_t* f_time_new(void)
{
	f_time_t* f_time = (f_time_t*)malloc(sizeof(f_time_t));
	if (!f_time)
		return NULL;
	f_time -> delete =

	return f_time;
}

void f_time_delete(f_time_t* f_time)
{
	free(f_time);
}

struct tm* now(f_time_t* this)
{
	time_t t = time(NULL);
	struct tm now = *localtime(&t);
	return &now;
	printf("now: %d-%02d-%02d %02d:%02d:%02d\n",
		now.tm_year + 1900, now.tm_mon + 1, now.tm_mday, now.tm_hour, now.tm_min, now.tm_sec);
}
*/
///f_utility.c

int orneks() {

	int arr[] = { [2] = 11, 20 };


	//int total = 50;
	/*
#if NEC == 0 //MACRO tanýmlanmadyýsa 0 dýr
	printf("NEC\n");
#endif

#define MAC

#ifdef MAC
	printf("MAC\n");
#endif

	printf("%d\n", M_PI);
*/
//maxint(50, 2);
//printf(STR(5));
//printf("%d\n", ++UNI(to, tal));
//printf("fevzi" "yuksel" "34");

//ub
//double d = 10. / 0.;
//float f = 10.f / 0.f;

//printf("%lf\n", d);
//printf("%f\n", f);
//srand(1u);
//unsigned int num = rand();
//srand(num);
//
//printf("%d\n", time(NULL));

	//int arr[5];
	//int arr[5] = { 0 };

	//for (size_t i = 0; i < 5; i++)
	//	printf("%d\n", arr[i]);

	//int arr2[20] = { [1] = 88, [5] = 9,[12] = 7,[8] = 99 };

	//for (size_t i = 0; i < 20; i++)
	//	printf("%d\n", arr2[i]);


		//char s[] = {'f', 'e', 'v', '\0'};
	//printf("%zu\n", sizeof(s));
	//puts(s);
	//puts("fev");
	//char* a = "fev";
	//printf("%s\n", !strcmp(s, a) ? "true" : "false");
}