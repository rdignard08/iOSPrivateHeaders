
@interface _UIActivityApplicationExtensionDiscovery : NSObject {

    BOOL _sourceIsManaged;
    BOOL _matchesOnlyUserElectedExtensions;
    BOOL _performsInitialMatching;
    NSArray _extensionPointIdentifiers;
    id _extensionMatchingContext;
}
@property (nonatomic, copy, readwrite) NSArray* extensionPointIdentifiers;
@property (nonatomic, assign, readwrite) NSNumber* sourceIsManaged;
@property (nonatomic, assign, readwrite) NSNumber* matchesOnlyUserElectedExtensions;
@property (atomic, retain, readwrite) NSNumber* extensionMatchingContext;
@property (atomic, assign, readwrite) NSNumber* performsInitialMatching;

 - (void) dealloc;
 - (BOOL) sourceIsManaged;
 - (void) setSourceIsManaged:(BOOL)a;
 - (id) extensionMatchingContext;
 - (void) setExtensionMatchingContext:(id)a;
 - (void) setMatchesOnlyUserElectedExtensions:(BOOL)a;
 - (id) activitiesMatchingInputItems:(id)aerror:(^@)bupdateBlock:(@?)c;
 - (void) cancelUpdatesIfNeeded;
 - (void) setExtensionPointIdentifiers:(id)a;
 - (id) initWithExtensionPointIdentifiers:(id)a;
 - (BOOL) matchesOnlyUserElectedExtensions;
 - (id) extensionPointIdentifiers;
 - (void) setPerformsInitialMatching:(BOOL)a;
 - (BOOL) performsInitialMatching;
 - (id) init;


@end
