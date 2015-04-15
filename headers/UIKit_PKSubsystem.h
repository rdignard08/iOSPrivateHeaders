
@protocol PKModularService;
@interface UIKit_PKSubsystem : NSObject <PKModularService> {

    BOOL _initialized;
    BOOL _plugInKitProcess;
    NSDictionary* _infoDictionary;
}
@property (nonatomic, copy, readwrite) NSDictionary* infoDictionary;
@property (nonatomic, assign, readwrite, getter=isPlugInKitProcess) NSNumber* plugInKitProcess;
 + (id) sharedInstance;
 + (id) initForPlugInKit;

 - (BOOL) isPlugInKitProcess;
 - (id) infoDictionary;
 - (void) endUsing:(id)a;
 - (void) setInfoDictionary:(id)a;
 - (void) beginUsing:(id)awithBundle:(id)b;
 - (void) setPlugInKitProcess:(BOOL)a;


@end
