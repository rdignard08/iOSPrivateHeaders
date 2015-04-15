
@interface NSBundle : NSObject {

    Q _flags;
    id _cfBundle;
    Q _reserved2;
    Class _principalClass;
    id _initialPath;
    id _resolvedPath;
    id _reserved3;
    id _lock;
}
@property (atomic, assign, readonly, isLoaded) NSNumber* loaded;
@property (atomic, copy, readonly) NSURL* bundleURL;
@property (atomic, copy, readonly) NSURL* resourceURL;
@property (atomic, copy, readonly) NSURL* executableURL;
@property (atomic, copy, readonly) NSURL* privateFrameworksURL;
@property (atomic, copy, readonly) NSURL* sharedFrameworksURL;
@property (atomic, copy, readonly) NSURL* sharedSupportURL;
@property (atomic, copy, readonly) NSURL* builtInPlugInsURL;
@property (atomic, copy, readonly) NSURL* appStoreReceiptURL;
@property (atomic, copy, readonly) NSString* bundlePath;
@property (atomic, copy, readonly) NSString* resourcePath;
@property (atomic, copy, readonly) NSString* executablePath;
@property (atomic, copy, readonly) NSString* privateFrameworksPath;
@property (atomic, copy, readonly) NSString* sharedFrameworksPath;
@property (atomic, copy, readonly) NSString* sharedSupportPath;
@property (atomic, copy, readonly) NSString* builtInPlugInsPath;
@property (atomic, copy, readonly) NSString* bundleIdentifier;
@property (atomic, copy, readonly) NSDictionary* infoDictionary;
@property (atomic, copy, readonly) NSDictionary* localizedInfoDictionary;
@property (atomic, assign, readonly) NSObject* principalClass;
@property (atomic, copy, readonly) NSArray* preferredLocalizations;
@property (atomic, copy, readonly) NSArray* localizations;
@property (atomic, copy, readonly) NSString* developmentLocalization;
@property (atomic, copy, readonly) NSArray* executableArchitectures;
 + (id) mediaPlayerBundle;
 + (id) pathForITunesStoreResource:(id)aofType:(id)b;
 + (id) _typologyBundle;
 + (id) currentNibPath;
 + (id) currentNibLoadingBundle;
 + (void) pushNibLoadingBundle:(id)a;
 + (void) pushNibPath:(id)a;
 + (void) popNibPath;
 + (void) popNibLoadingBundle;
 + (id) bundleWithPath:(id)a;
 + (id) bundleForClass:(Class)a;
 + (id) loadedBundles;
 + (id) allBundles;
 + (id) allFrameworks;
 + (id) preferredLocalizationsFromArray:(id)a;
 + (id) findBundleResources:(id)acallingMethod:(SEL)bdirectory:(id)clanguages:(id)dname:(id)etypes:(id)flimit:(Q)g;
 + (id) findBundleResourceURLsCallingMethod:(SEL)abaseURL:(id)bpassingTest:(@?)c;
 + (id) URLForResource:(id)awithExtension:(id)bsubdirectory:(id)cinBundleWithURL:(id)d;
 + (id) pathsForResourcesOfType:(id)ainDirectory:(id)b;
 + (id) URLsForResourcesWithExtension:(id)asubdirectory:(id)binBundleWithURL:(id)c;
 + (void) setSystemLanguages:(id)a;
 + (id) bundleWithIdentifier:(id)a;
 + (id) debugDescription;
 + (id) mainBundle;
 + (id) pathForResource:(id)aofType:(id)binDirectory:(id)c;
 + (id) preferredLocalizationsFromArray:(id)aforPreferences:(id)b;
 + (id) bundleWithURL:(id)a;

 - (id) loadNibNamed:(id)aowner:(id)boptions:(id)c;
 - (id) dataForResourceName:(id)a;
 - (id) objectForInfoDictionaryKey:(id)a;
 - (^{__CFBundle=}) _cfBundle;
 - (id) URLForResource:(id)awithExtension:(id)bsubdirectory:(id)clocalization:(id)d;
 - (id) bundlePath;
 - (id) URLForResource:(id)awithExtension:(id)bsubdirectory:(id)c;
 - (id) URLForResource:(id)awithExtension:(id)b;
 - (BOOL) loadAndReturnError:(^@)a;
 - (BOOL) unload;
 - (id) initWithPath:(id)a;
 - (id) bundleURL;
 - (id) appStoreReceiptURL;
 - (id) localizations;
 - (id) localizedInfoDictionary;
 - (BOOL) isLoaded;
 - (id) pathForResource:(id)aofType:(id)binDirectory:(id)cforLocalization:(id)d;
 - (id) pathsForResourcesOfType:(id)ainDirectory:(id)bforLocalization:(id)c;
 - (id) pathsForResourcesOfType:(id)ainDirectory:(id)b;
 - (id) findBundleResourceURLsCallingMethod:(SEL)apassingTest:(@?)b;
 - (id) pathForResource:(id)aofType:(id)b;
 - (id) URLsForResourcesWithExtension:(id)asubdirectory:(id)blocalization:(id)c;
 - (id) URLsForResourcesWithExtension:(id)asubdirectory:(id)b;
 - (id) localizedStringForKey:(id)avalue:(id)btable:(id)c;
 - (id) executableURL;
 - (id) pathForAuxiliaryExecutable:(id)a;
 - (id) URLForAuxiliaryExecutable:(id)a;
 - (id) privateFrameworksPath;
 - (id) privateFrameworksURL;
 - (id) sharedFrameworksPath;
 - (id) sharedFrameworksURL;
 - (id) sharedSupportPath;
 - (id) sharedSupportURL;
 - (id) builtInPlugInsPath;
 - (id) builtInPlugInsURL;
 - (id) bundleLanguages;
 - (void) invalidateResourceCache;
 - (Class) principalClass;
 - (void) __static;
 - (id) _regionsArray;
 - (id) _pathForResource:(id)aofType:(id)binDirectory:(id)cforRegion:(id)d;
 - (id) _pathsForResourcesOfType:(id)ainDirectory:(id)bforRegion:(id)c;
 - (id) pathForResource:(id)aofType:(id)binDirectory:(id)cforLanguage:(id)d;
 - (id) pathsForResourcesOfType:(id)ainDirectory:(id)bforLanguage:(id)c;
 - (id) developmentLocalization;
 - (BOOL) preflightAndReturnError:(^@)a;
 - (id) executableArchitectures;
 - (id) description;
 - (BOOL) load;
 - (void) dealloc;
 - (void) finalize;
 - (id) initWithURL:(id)a;
 - (id) bundleIdentifier;
 - (id) infoDictionary;
 - (id) resourceURL;
 - (id) executablePath;
 - (id) pathForResource:(id)aofType:(id)binDirectory:(id)c;
 - (id) preferredLocalizations;
 - (Class) classNamed:(id)a;
 - (Q) versionNumber;
 - (id) resourcePath;


@end
