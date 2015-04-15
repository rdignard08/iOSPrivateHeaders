
@interface _UIRemoteViewService : NSObject {

    @"NSExtension" _extension;
    @"NSUUID" _contextToken;
}
@property (nonatomic, retain, readwrite) NSExtension* extension;
@property (nonatomic, retain, readwrite) NSNumber* plugin;
@property (nonatomic, copy, readwrite) NSUUID* contextToken;

 - (void) dealloc;
 - (void) setExtension:(id)a;
 - (id) extension;
 - (id) initWithExtension:(id)aandContextToken:(id)b;
 - (id) initWithPlugIn:(id)aandContextToken:(id)b;
 - (void) setPlugin:(id)a;
 - (id) plugin;
 - (id) contextToken;
 - (void) setContextToken:(id)a;


@end
