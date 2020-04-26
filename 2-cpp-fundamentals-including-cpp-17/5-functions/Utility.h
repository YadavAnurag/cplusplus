bool IsPrime(int x);

bool Is2MorePrime(int x); 
// call by value
// call by value passes value with copy, can be cons performance if passed value is larged like object
// then its better to use pass by ref
// otherwise if you want to use pass by ref and save time, and not want to value to be modified
// then its better to use ref with const


// bool Is2MorePrime(int& x); 
// pass by reference


// bool Is2MorePrime(int const& x); 
// pass by reference with const(means no modification)

// int& BadFunction(int x); 
// do not use return as ref, because after this function scope end reference will be lost
// that may cause error as any other block of project may want to use that ref
// use it, unless you do not want to loose the ref
