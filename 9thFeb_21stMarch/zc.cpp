#include <iostream>
#include <map>
#include <cstdio>
#include<set>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
class DivideThePlane {
  public:
  long long makeCuts(int H, int V, long long N) {
      ll x,y;
	  ll sq=ceil(sqrt(N));
	  ll ans;
	  sq=-1;
	  if(((H+1)*(V+1))>=N)
	  return 0;
	  else
	  {
		  x=max(sq-H,0ll);
		  y=max(sq-V,0ll);
		  ans=(x+y);
		  return ans;
	  }
  }
};
// BEGIN CUT HERE
#include <cstdio>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
namespace moj_harness {
	using std::string;
	using std::vector;
	int run_test_case(int);
	void run_test(int casenum = -1, bool quiet = false) {
		if (casenum != -1) {
			if (run_test_case(casenum) == -1 && !quiet) {
				std::cerr << "Illegal input! Test case " << casenum << " does not exist." << std::endl;
			}
			return;
		}
		
		int correct = 0, total = 0;
		for (int i=0;; ++i) {
			int x = run_test_case(i);
			if (x == -1) {
				if (i >= 100) break;
				continue;
			}
			correct += x;
			++total;
		}
		
		if (total == 0) {
			std::cerr << "No test cases run." << std::endl;
		} else if (correct < total) {
			std::cerr << "Some cases FAILED (passed " << correct << " of " << total << ")." << std::endl;
		} else {
			std::cerr << "All " << total << " tests passed!" << std::endl;
		}
	}
	
	int verify_case(int casenum, const long long &expected, const long long &received, std::clock_t elapsed) { 
		std::cerr << "Example " << casenum << "... "; 
		
		string verdict;
		vector<string> info;
		char buf[100];
		
		if (elapsed > CLOCKS_PER_SEC / 200) {
			std::sprintf(buf, "time %.2fs", elapsed * (1.0/CLOCKS_PER_SEC));
			info.push_back(buf);
		}
		
		if (expected == received) {
			verdict = "PASSED";
		} else {
			verdict = "FAILED";
		}
		
		std::cerr << verdict;
		if (!info.empty()) {
			std::cerr << " (";
			for (size_t i=0; i<info.size(); ++i) {
				if (i > 0) std::cerr << ", ";
				std::cerr << info[i];
			}
			std::cerr << ")";
		}
		std::cerr << std::endl;
		
		if (verdict == "FAILED") {
			std::cerr << "    Expected: " << expected << std::endl; 
			std::cerr << "    Received: " << received << std::endl; 
		}
		
		return verdict == "PASSED";
	}

	int run_test_case(int casenum__) {
		switch (casenum__) {
		case 0: {
			int H                     = 0;
			int V                     = 0;
			long long N               = 1;
			long long expected__      = 0;

			std::clock_t start__      = std::clock();
			long long received__      = DivideThePlane().makeCuts(H, V, N);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			int H                     = 0;
			int V                     = 0;
			long long N               = 3;
			long long expected__      = 2;

			std::clock_t start__      = std::clock();
			long long received__      = DivideThePlane().makeCuts(H, V, N);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			int H                     = 4;
			int V                     = 0;
			long long N               = 3;
			long long expected__      = 0;

			std::clock_t start__      = std::clock();
			long long received__      = DivideThePlane().makeCuts(H, V, N);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			int H                     = 4;
			int V                     = 0;
			long long N               = 20;
			long long expected__      = 3;

			std::clock_t start__      = std::clock();
			long long received__      = DivideThePlane().makeCuts(H, V, N);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			int H                     = 1;
			int V                     = 3;
			long long N               = 35;
			long long expected__      = 6;

			std::clock_t start__      = std::clock();
			long long received__      = DivideThePlane().makeCuts(H, V, N);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 5: {
			int H                     = 99999;
			int V                     = 99997;
			long long N               = 10000000000LL;
			long long expected__      = 2;

			std::clock_t start__      = std::clock();
			long long received__      = DivideThePlane().makeCuts(H, V, N);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 6: {
			int H                     = 4;
			int V                     = 7;
			long long N               = 12345;
			long long expected__      = 210;

			std::clock_t start__      = std::clock();
			long long received__      = DivideThePlane().makeCuts(H, V, N);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 7: {
			int H                     = ;
			int V                     = ;
			long long N               = ;
			long long expected__      = ;

			std::clock_t start__      = std::clock();
			long long received__      = DivideThePlane().makeCuts(H, V, N);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 8: {
			int H                     = ;
			int V                     = ;
			long long N               = ;
			long long expected__      = ;

			std::clock_t start__      = std::clock();
			long long received__      = DivideThePlane().makeCuts(H, V, N);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 9: {
			int H                     = ;
			int V                     = ;
			long long N               = ;
			long long expected__      = ;

			std::clock_t start__      = std::clock();
			long long received__      = DivideThePlane().makeCuts(H, V, N);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
		default:
			return -1;
		}
	}
}

#include <cstdlib>
int main(int argc, char *argv[]) {
	if (argc == 1) {
		moj_harness::run_test();
	} else {
		for (int i=1; i<argc; ++i)
			moj_harness::run_test(std::atoi(argv[i]));
	}
}
// END CUT HERE
