
@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {

    ^{__CFURLEnumerator=} _enumerator;
    @? _errorHandler;
    BOOL shouldContinue;
}

 - (id) fileAttributes;
 - (id) directoryAttributes;
 - (void) skipDescendents;
 - (void) skipDescendants;
 - (void) setErrorHandler:(@?)a ;
 - (id) initWithURL:(id)a includingPropertiesForKeys:(id)b options:(unsigned long long)c errorHandler:(@?)d ;
 - (@?) errorHandler;
 - (void) dealloc;
 - (void) finalize;
 - (id) nextObject;
 - (unsigned long long) level;


@end
