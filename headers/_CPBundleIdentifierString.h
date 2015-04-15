
@interface _CPBundleIdentifierString : NSString {

    NSString* _executablePath;
    NSString* _bundleIdentifierOrProcessName;
    BOOL _isProcessName;
}

 - (void) dealloc;
 - (unsigned short) characterAtIndex:(unsigned long long)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (unsigned long long) length;
 - (void) _loadBundleIdentifierOrProcessName;
 - (id) _initWithExecutablePath:(id)a;
 - (BOOL) _isProcessName;


@end
