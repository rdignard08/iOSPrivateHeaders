
@interface BSCFBundle : NSObject {

    ^{__CFBundle=} _cfBundle;
}

 - (id) bundlePath;
 - (id) initWithPath:(id)a ;
 - (id) localizedInfoDictionary;
 - (id) pathForResource:(id)a ofType:(id)b ;
 - (id) localizedStringForKey:(id)a value:(id)b table:(id)c ;
 - (id) description;
 - (void) dealloc;
 - (id) bundleIdentifier;
 - (id) infoDictionary;
 - (id) executablePath;
 - (id) initWithCFBundle:(^{__CFBundle=})a ;
 - (id) _pathsForResource:(id)a ofType:(id)b inDirectory:(id)c ;
 - (^{__CFBundle=}) cfBundle;
 - (id) pathForResource:(id)a ofType:(id)b inDirectory:(id)c ;


@end
