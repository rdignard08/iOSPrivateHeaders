
@interface BSCFBundle : NSObject {

    ^{__CFBundle=} _cfBundle;
}

 - (id) bundlePath;
 - (id) initWithPath:(id)a;
 - (id) localizedInfoDictionary;
 - (id) pathForResource:(id)aofType:(id)b;
 - (id) localizedStringForKey:(id)avalue:(id)btable:(id)c;
 - (id) description;
 - (void) dealloc;
 - (id) bundleIdentifier;
 - (id) infoDictionary;
 - (id) executablePath;
 - (id) initWithCFBundle:(^{__CFBundle=})a;
 - (id) _pathsForResource:(id)aofType:(id)binDirectory:(id)c;
 - (^{__CFBundle=}) cfBundle;
 - (id) pathForResource:(id)aofType:(id)binDirectory:(id)c;


@end
