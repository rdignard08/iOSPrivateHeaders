
@interface NSURLCacheInternal : NSObject {

    Q memoryCapacity;
    Q diskCapacity;
    @"NSString" diskPath;
    Q currentMemoryUsage;
    Q currentDiskUsage;
    ^{_CFURLCache={__CFRuntimeBase=Q[4C]I}^{__CFURLCache}} _cacheRef;
}

 - (void) dealloc;
 - (void) finalize;


@end
