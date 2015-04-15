
@interface NSURLCacheInternal : NSObject {

    unsigned long long memoryCapacity;
    unsigned long long diskCapacity;
    NSString* diskPath;
    unsigned long long currentMemoryUsage;
    unsigned long long currentDiskUsage;
    ^{_CFURLCache={__CFRuntimeBase=Q[4C]I}^{__CFURLCache}} _cacheRef;
}

 - (void) dealloc;
 - (void) finalize;


@end
