
@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {

    ^{__CFURLEnumerator=} _enumerator;
    @? _errorHandler;
    BOOL shouldContinue;
}

 - (id) fileAttributes;
 - (id) directoryAttributes;
 - (void) skipDescendents;
 - (void) skipDescendants;
 - (void) setErrorHandler:(@?)a;
 - (id) initWithURL:(id)aincludingPropertiesForKeys:(id)boptions:(Q)cerrorHandler:(@?)d;
 - (@?) errorHandler;
 - (void) dealloc;
 - (void) finalize;
 - (id) nextObject;
 - (Q) level;


@end
