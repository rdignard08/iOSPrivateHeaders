
@interface WebCoreStatistics : NSObject {

}
 + (id) statistics;
 + (id) javaScriptRootObjectTypeCounts;
 + (Q) javaScriptProtectedGlobalObjectsCount;
 + (id) javaScriptProtectedObjectTypeCounts;
 + (Q) javaScriptObjectsCount;
 + (Q) javaScriptGlobalObjectsCount;
 + (Q) javaScriptProtectedObjectsCount;
 + (id) javaScriptObjectTypeCounts;
 + (void) garbageCollectJavaScriptObjects;
 + (void) garbageCollectJavaScriptObjectsOnAlternateThreadForDebugging:(BOOL)a;
 + (void) setJavaScriptGarbageCollectorTimerEnabled:(BOOL)a;
 + (Q) iconPageURLMappingCount;
 + (Q) iconRetainedPageURLCount;
 + (Q) iconRecordCount;
 + (Q) iconsWithDataCount;
 + (Q) cachedFontDataCount;
 + (Q) cachedFontDataInactiveCount;
 + (void) purgeInactiveFontData;
 + (Q) glyphPageCount;
 + (BOOL) shouldPrintExceptions;
 + (void) setShouldPrintExceptions:(BOOL)a;
 + (void) emptyCache;
 + (void) setCacheDisabled:(BOOL)a;
 + (void) startIgnoringWebCoreNodeLeaks;
 + (void) stopIgnoringWebCoreNodeLeaks;
 + (id) memoryStatistics;
 + (void) returnFreeMemoryToSystem;
 + (i) cachedPageCount;
 + (i) cachedFrameCount;
 + (i) autoreleasedPageCount;
 + (Q) javaScriptNoGCAllowedObjectsCount;
 + (Q) javaScriptReferencedObjectsCount;
 + (id) javaScriptRootObjectClasses;
 + (Q) javaScriptInterpretersCount;



@end
