
@interface WebCoreStatistics : NSObject {

}
 + (id) statistics;
 + (id) javaScriptRootObjectTypeCounts;
 + (unsigned long long) javaScriptProtectedGlobalObjectsCount;
 + (id) javaScriptProtectedObjectTypeCounts;
 + (unsigned long long) javaScriptObjectsCount;
 + (unsigned long long) javaScriptGlobalObjectsCount;
 + (unsigned long long) javaScriptProtectedObjectsCount;
 + (id) javaScriptObjectTypeCounts;
 + (void) garbageCollectJavaScriptObjects;
 + (void) garbageCollectJavaScriptObjectsOnAlternateThreadForDebugging:(BOOL)a;
 + (void) setJavaScriptGarbageCollectorTimerEnabled:(BOOL)a;
 + (unsigned long long) iconPageURLMappingCount;
 + (unsigned long long) iconRetainedPageURLCount;
 + (unsigned long long) iconRecordCount;
 + (unsigned long long) iconsWithDataCount;
 + (unsigned long long) cachedFontDataCount;
 + (unsigned long long) cachedFontDataInactiveCount;
 + (void) purgeInactiveFontData;
 + (unsigned long long) glyphPageCount;
 + (BOOL) shouldPrintExceptions;
 + (void) setShouldPrintExceptions:(BOOL)a;
 + (void) emptyCache;
 + (void) setCacheDisabled:(BOOL)a;
 + (void) startIgnoringWebCoreNodeLeaks;
 + (void) stopIgnoringWebCoreNodeLeaks;
 + (id) memoryStatistics;
 + (void) returnFreeMemoryToSystem;
 + (int) cachedPageCount;
 + (int) cachedFrameCount;
 + (int) autoreleasedPageCount;
 + (unsigned long long) javaScriptNoGCAllowedObjectsCount;
 + (unsigned long long) javaScriptReferencedObjectsCount;
 + (id) javaScriptRootObjectClasses;
 + (unsigned long long) javaScriptInterpretersCount;



@end
