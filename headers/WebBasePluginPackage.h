
@interface WebBasePluginPackage : NSObject {

    @"NSMutableSet" pluginDatabases;
    {String="m_impl"{RefPtr<WTF::StringImpl>="m_ptr"^{StringImpl}}} path;
    {PluginInfo="name"{String="m_impl"{RefPtr<WTF::StringImpl>="m_ptr"^{StringImpl}}}"file"{String="m_impl"{RefPtr<WTF::StringImpl>="m_ptr"^{StringImpl}}}"desc"{String="m_impl"{RefPtr<WTF::StringImpl>="m_ptr"^{StringImpl}}}"mimes"{Vector<WebCore::MimeClassInfo, 0, WTF::CrashOnOverflow>="m_buffer"^{MimeClassInfo}"m_capacity"I"m_size"I}"isApplicationPlugin"B} pluginInfo;
    {RetainPtr<__CFBundle *>="m_ptr"^v} cfBundle;
    ^? BP_CreatePluginMIMETypesPreferences;
}
 + (void) initialize;
 + (id) preferredLocalizationName;
 + (id) pluginWithPath:(id)a;

 - (Vv) release;
 - (Vv) _webcore_releaseOnWebThread;
 - ({String={RefPtr<WTF::StringImpl>=^{StringImpl}}}) bundleVersion;
 - (void) unload;
 - (id) initWithPath:(id)a;
 - (id) MIMETypeForExtension:(r^{String={RefPtr<WTF::StringImpl>=^{StringImpl}}})a;
 - (BOOL) load;
 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (void) finalize;
 - ({String={RefPtr<WTF::StringImpl>=^{StringImpl}}}) bundleIdentifier;
 - (r^{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}) path;
 - (void) createPropertyListFile;
 - (id) _objectForInfoDictionaryKey:(id)a;
 - (id) pListForPath:(id)acreateFile:(BOOL)b;
 - (BOOL) getPluginInfoFromPLists;
 - (r^{PluginInfo={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{Vector<WebCore::MimeClassInfo, 0, WTF::CrashOnOverflow>=^{MimeClassInfo}II}B}) pluginInfo;
 - (BOOL) supportsExtension:(r^{String={RefPtr<WTF::StringImpl>=^{StringImpl}}})a;
 - (BOOL) supportsMIMEType:(r^{String={RefPtr<WTF::StringImpl>=^{StringImpl}}})a;
 - (BOOL) isQuickTimePlugIn;
 - (BOOL) isJavaPlugIn;
 - (BOOL) isNativeLibraryData:(id)a;
 - (I) versionNumber;
 - (void) wasAddedToPluginDatabase:(id)a;
 - (void) wasRemovedFromPluginDatabase:(id)a;


@end
