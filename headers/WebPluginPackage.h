
@interface WebPluginPackage : WebBasePluginPackage {

    NSBundle nsBundle;
}

 - (id) initWithPath:(id)a;
 - (BOOL) load;
 - (void) dealloc;
 - (Class) viewFactory;
 - (id) bundle;


@end
