
@interface WebHTMLRepresentationPrivate : NSObject {

    @"WebDataSource" dataSource;
    BOOL hasSentResponseToPlugin;
    BOOL includedInWebKitStatistics;
    @"<WebPluginManualLoader>" manualLoader;
    @"WAKView" pluginView;
}



@end
