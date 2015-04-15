
@interface WebPluginDatabase : NSObject {

    NSMutableDictionary* plugins;
    NSMutableSet* registeredMIMETypes;
    NSArray* plugInPaths;
    NSMutableSet* pluginInstanceViews;
}
 + (id) sharedDatabaseIfExists;
 + (id) sharedDatabase;
 + (id) _defaultPlugInPaths;
 + (void) closeSharedDatabase;
 + (void) setAdditionalWebPlugInPaths:(id)a;

 - (void) dealloc;
 - (void) close;
 - (id) init;
 - (void) refresh;
 - (id) plugins;
 - (void) setPlugInPaths:(id)a ;
 - (id) pluginForMIMEType:(id)a ;
 - (void) _removePlugin:(id)a ;
 - (id) _scanForNewPlugins;
 - (void) _addPlugin:(id)a ;
 - (id) pluginForExtension:(id)a ;
 - (BOOL) isMIMETypeRegistered:(id)a ;
 - (void) addPluginInstanceView:(id)a ;
 - (void) removePluginInstanceView:(id)a ;
 - (void) removePluginInstanceViewsFor:(id)a ;
 - (void) destroyAllPluginInstanceViews;
 - (id) _plugInPaths;


@end
