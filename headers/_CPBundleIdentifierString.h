
@interface _CPBundleIdentifierString : NSString {

    @"NSString" _executablePath;
    @"NSString" _bundleIdentifierOrProcessName;
    BOOL _isProcessName;
}

 - (void) dealloc;
 - (S) characterAtIndex:(Q)a;
 - (void) getCharacters:(^S)arange:({_NSRange=QQ})b;
 - (Q) length;
 - (void) _loadBundleIdentifierOrProcessName;
 - (id) _initWithExecutablePath:(id)a;
 - (BOOL) _isProcessName;


@end
