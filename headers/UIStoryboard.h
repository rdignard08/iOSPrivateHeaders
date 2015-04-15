
@interface UIStoryboard : NSObject {

    NSBundle bundle;
    NSString storyboardFileName;
    NSDictionary identifierToNibNameMap;
    NSString designatedEntryPointIdentifier;
    NSMutableDictionary identifierToUINibMap;
}
@property (nonatomic, assign, readonly) NSBundle* bundle;
@property (atomic, assign, readonly) NSString* name;
@property (nonatomic, assign, readonly) NSString* storyboardFileName;
@property (nonatomic, assign, readonly) NSDictionary* identifierToNibNameMap;
@property (nonatomic, assign, readonly) NSString* designatedEntryPointIdentifier;
@property (nonatomic, assign, readonly) NSMutableDictionary* identifierToUINibMap;
 + (id) storyboardWithName:(id)abundle:(id)b;

 - (void) dealloc;
 - (id) name;
 - (id) instantiateInitialViewController;
 - (id) instantiateViewControllerWithIdentifier:(id)a;
 - (BOOL) containsNibNamed:(id)a;
 - (id) nibForStoryboardNibNamed:(id)a;
 - (id) identifierForStringsFile;
 - (id) initWithBundle:(id)astoryboardFileName:(id)bidentifierToNibNameMap:(id)cdesignatedEntryPointIdentifier:(id)d;
 - (id) storyboardFileName;
 - (id) identifierToNibNameMap;
 - (id) nibForViewControllerWithIdentifier:(id)a;
 - (id) designatedEntryPointIdentifier;
 - (id) identifierToUINibMap;
 - (id) bundle;


@end
