/*
The keyword [ extern “C” ] is used to declare functions in C++ to be compiled in C. The compiler will use C libraries and won't screw up the function names. Also python is written in C and so you have to make sure that your C++ library is C callable.
*/
 

    #include <cstdio>
    
extern "C"  int Square() {
    int n = 4; 
    double t1 = 2, nextTerm = 0;
    

    for (int i = 0; i <= n; ++i) {
        // Prints the first term.
        if(i == 0) {
            printf("  %f\n", t1);
            continue;
        }
        
        nextTerm = t1 * t1;
        
        t1 = nextTerm;
        
        printf("  %f\n", nextTerm);
    }
    return 0;
}
