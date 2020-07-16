#pragma GCC optimize("Ofast")
#pragma GCC target("tune=native")
/* warning: GNUism everywhere */
#define DEBUG	0
#define EPS	10e-10

#include <math.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <inttypes.h>

typedef int_fast8_t	i8f;
typedef	int_fast16_t	i16f;
typedef int_fast32_t	i32f;
typedef int_fast64_t	i64f;
typedef uint_fast8_t	u8f;
typedef	uint_fast16_t	u16f;
typedef uint_fast32_t	u32f;
typedef uint_fast64_t	u64f;
typedef int8_t		i8;
typedef	int16_t		i16;
typedef int32_t		i32;
typedef int64_t		i64;
typedef uint8_t		u8;
typedef	uint16_t	u16;
typedef uint32_t	u32;
typedef uint64_t	u64;

#define i8fp		"%" PRIdFAST8
#define i16fp		"%" PRIdFAST16
#define i32fp		"%" PRIdFAST32
#define i64fp		"%" PRIdFAST64
#define u8fp		"%" PRIuFAST8
#define u16fp		"%" PRIuFAST16
#define u32fp		"%" PRIuFAST32
#define u64fp		"%" PRIuFAST64
#define i8p		"%" PRId8
#define i16p		"%" PRId16
#define i32p		"%" PRId32
#define i64p		"%" PRId64
#define u8p		"%" PRIu8
#define u16p		"%" PRIu16
#define u32p		"%" PRIu32
#define u64p		"%" PRIu64
#define i8fs		"%" SCNdFAST8
#define i16fs		"%" SCNdFAST16
#define i32fs		"%" SCNdFAST32
#define i64fs		"%" SCNdFAST64
#define u8fs		"%" SCNuFAST8
#define u16fs		"%" SCNuFAST16
#define u32fs		"%" SCNuFAST32
#define u64fs		"%" SCNuFAST64
#define i8s		"%" SCNd8
#define i16s		"%" SCNd16
#define i32s		"%" SCNd32
#define i64s		"%" SCNd64
#define u8s		"%" SCNu8
#define u16s		"%" SCNu16
#define u32s		"%" SCNu32
#define u64s		"%" SCNu64
#define ptrdp		"%td" 

#define likely(x)       __builtin_expect((x),1)
#define unlikely(x)     __builtin_expect((x),0)

#if defined(DEBUG)&&!defined(ONLINE_JUDGE)
# define DBG(fmt,...)	printf(fmt,##__VA_ARGS__)
#else
# define DBG(fmt,...)
#endif

#define c1(y,x)		y##x
#define c2(y,x)		c1(y,x)

#define nof(a)		(sizeof(a)/sizeof(a[0]))
/*#define FA(i,a)		u16f c2(_i,__LINE__)=0;for(__typeof__(a[0]) *i=a;c2(_i,__LINE__)<nof(a);i=&a[++c2(_i,__LINE__)])*/
/* GNU */
#define FA(i,a)		for(__typeof__(a[0]) *i=a;i<a+nof(a);i+=1)
#define FZTE(i,n)	for(u16f i=0;i<n;i++)
#define FZTI(i,n)	for(u16f i=0;i<=n;i++)
#define FOTE(i,n)	for(u16f i=1;i<n;i++)
#define FOTI(i,n)	for(u16f i=1;i<=n;i++)
#define FATO(i,n)	for(u16f i=n;i>0;i--)
#define FATZ(i,n)	for(i16f i=n;i>=0;i--)
#define REP(n)		FZTE(c2(_i,__COUNTER__),n)
#define NARGS(...)	_NARGS(__VA_ARGS__,10,9,8,7,6,5,4,3,2,1)
#define _NARGS(a,b,c,d,e,f,g,h,i,j,count,...) count

#define DUP0(s)
#define DUP1(s)		s
#define DUP2(s)		DUP1(s) s
#define DUP3(s)		DUP2(s) s
#define DUP4(s)		DUP3(s) s
#define DUP5(s)		DUP4(s) s
#define DUP6(s)		DUP5(s) s
#define DUP7(s)		DUP6(s) s
#define DUP8(s)		DUP7(s) s
#define DUP9(s)		DUP8(s) s
#define DUP10(s)	DUP9(s) s
#define DUP(s,n)	c2(DUP,n)(s)

#define _RX(a,...)	scanf(DUP(a,NARGS(__VA_ARGS__)),__VA_ARGS__)

#define ri8f(...)	_RX(i8fs,__VA_ARGS__)
#define ri16f(...)	_RX(i16fs,__VA_ARGS__)
#define ri32f(...)	_RX(i32fs,__VA_ARGS__)
#define ri64f(...)	_RX(i64fs,__VA_ARGS__)
#define ru8f(...)	_RX(u8fs,__VA_ARGS__)
#define ru16f(...)	_RX(u16fs,__VA_ARGS__)
#define ru32f(...)	_RX(u32fs,__VA_ARGS__)
#define ru64f(...)	_RX(u64fs,__VA_ARGS__)
#define ri8(...)	_RX(i8s,__VA_ARGS__)
#define ri16(...)	_RX(i16s,__VA_ARGS__)
#define ri32(...)	_RX(i32s,__VA_ARGS__)
#define ri64(...)	_RX(i64s,__VA_ARGS__)
#define ru8(...)	_RX(u8s,__VA_ARGS__)
#define ru16(...)	_RX(u16s,__VA_ARGS__)
#define ru32(...)	_RX(u32s,__VA_ARGS__)
#define ru64(...)	_RX(u64s,__VA_ARGS__)
#define rs(...)		_RX("%s",__VA_ARGS__)

#define _PX(a,...)	printf(DUP(a " ",NARGS(__VA_ARGS__)),__VA_ARGS__)

#define pi8f(...)	_PX(i8fp,__VA_ARGS__)
#define pi16f(...)	_PX(i16fp,__VA_ARGS__)
#define pi32f(...)	_PX(i32fp,__VA_ARGS__)
#define pi64f(...)	_PX(i64fp,__VA_ARGS__)
#define pu8f(...)	_PX(u8fp,__VA_ARGS__)
#define pu16f(...)	_PX(u16fp,__VA_ARGS__)
#define pu32f(...)	_PX(u32fp,__VA_ARGS__)
#define pu64f(...)	_PX(u64fp,__VA_ARGS__)
#define pi8(...)	_PX(i8p,__VA_ARGS__)
#define pi16(...)	_PX(i16p,__VA_ARGS__)
#define pi32(...)	_PX(i32p,__VA_ARGS__)
#define pi64(...)	_PX(i64p,__VA_ARGS__)
#define pu8(...)	_PX(u8p,__VA_ARGS__)
#define pu16(...)	_PX(u16p,__VA_ARGS__)
#define pu32(...)	_PX(u32p,__VA_ARGS__)
#define pu64(...)	_PX(u64p,__VA_ARGS__)
#define ps(...)		_PX("%s",__VA_ARGS__)

#define _DX(a,...)	DBG(DUP(a " ",NARGS(__VA_ARGS__)),__VA_ARGS__)

#define di8f(...)	_DX(i8fp,__VA_ARGS__)
#define di16f(...)	_DX(i16fp,__VA_ARGS__)
#define di32f(...)	_DX(i32fp,__VA_ARGS__)
#define di64f(...)	_DX(i64fp,__VA_ARGS__)
#define du8f(...)	_DX(u8fp,__VA_ARGS__)
#define du16f(...)	_DX(u16fp,__VA_ARGS__)
#define du32f(...)	_DX(u32fp,__VA_ARGS__)
#define du64f(...)	_DX(u64fp,__VA_ARGS__)
#define di8(...)	_DX(i8p,__VA_ARGS__)
#define di16(...)	_DX(i16p,__VA_ARGS__)
#define di32(...)	_DX(i32p,__VA_ARGS__)
#define di64(...)	_DX(i64p,__VA_ARGS__)
#define du8(...)	_DX(u8p,__VA_ARGS__)
#define du16(...)	_DX(u16p,__VA_ARGS__)
#define du32(...)	_DX(u32p,__VA_ARGS__)
#define du64(...)	_DX(u64p,__VA_ARGS__)
#define ds(...)		_DX("%s",__VA_ARGS__)

#if 0 // non-GNU
# define _PXN(a,...)	printf(DUP(a " ",NARGS(__VA_ARGS__))"\n",__VA_ARGS__)
#else // GNU
# define _PXN(a,b,...)	printf(a DUP(" " a,NARGS(__VA_ARGS__))"\n",b,##__VA_ARGS__)
#endif

#define pi8fn(...)	_PXN(i8fp,__VA_ARGS__)
#define pi16fn(...)	_PXN(i16fp,__VA_ARGS__)
#define pi32fn(...)	_PXN(i32fp,__VA_ARGS__)
#define pi64fn(...)	_PXN(i64fp,__VA_ARGS__)
#define pu8fn(...)	_PXN(u8fp,__VA_ARGS__)
#define pu16fn(...)	_PXN(u16fp,__VA_ARGS__)
#define pu32fn(...)	_PXN(u32fp,__VA_ARGS__)
#define pu64fn(...)	_PXN(u64fp,__VA_ARGS__)
#define pi8n(...)	_PXN(i8p,__VA_ARGS__)
#define pi16n(...)	_PXN(i16p,__VA_ARGS__)
#define pi32n(...)	_PXN(i32p,__VA_ARGS__)
#define pi64n(...)	_PXN(i64p,__VA_ARGS__)
#define pu8n(...)	_PXN(u8p,__VA_ARGS__)
#define pu16n(...)	_PXN(u16p,__VA_ARGS__)
#define pu32n(...)	_PXN(u32p,__VA_ARGS__)
#define pu64n(...)	_PXN(u64p,__VA_ARGS__)
#define psn(...)	_PXN("%s",__VA_ARGS__)

#define max(x,y)	((x)>(y)?(x):(y))
#define min(x,y)	((x)<(y)?(x):(y))

#define QCMP(f,a,b)	int f(const void *a,const void *b)
#define QCMPI(f,t)	\
QCMP(f,a,b){\
	if(*(t *)a>*(t *)b) return 1;\
	else if(*(t *)a<*(t *)b) return -1;\
	return 0;\
}
#define sort(a,cmp)	qsort(a,nof(a),sizeof(a[0]),cmp)
#define bs(a,k,cmp)	(__typeof__(a[0]) *)bsearch(&k,a,nof(a),sizeof(a[0]),cmp)
#define cls(a)		memset(a,0x0,sizeof(a))

static inline u64 fpow(u64 a,u64 b){
	u64 r=1;
	while(b){
		if(b&0x1){
			r*=a;
		}
		a*=a;
		b>>=1;
	}
	return r;
}

static inline int feq(double a,double b){return (fabs(a-b)<EPS);}


int cmpstr(const void *a,const void *b){
	return strcmp(*(char **)a,*(char **)b);
}

QCMPI(cmpu64,u64);

int main(){
	i32 t;
	ri32(&t);
	FOTI(j,t){
		i32 dum;
		ri32(&dum);
		char str[51200];
		rs(str);
		int l=strlen(str);
		FZTE(i,l){
			str[i]=(str[i]=='S')?'E':'S';
		}
		printf("Case #%ld: %s\n",j,str);
	}
	return 0;
}
