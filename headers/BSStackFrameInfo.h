
@interface BSStackFrameInfo : NSObject {

    @"NSString" _realFunctionName;
    Q _address;
    @"NSString" _functionName;
    @"NSString" _executableName;
    @"NSString" _className;
}
@property (nonatomic, assign, readonly) NSNumber* address;
@property (nonatomic, retain, readonly) NSString* functionName;
@property (nonatomic, retain, readonly) NSString* executableName;
@property (nonatomic, retain, readonly) NSString* className;

 - (Q) address;
 - (id) description;
 - (void) dealloc;
 - (id) className;
 - (id) initWithReturnAddress:(Q)a;
 - (id) functionName;
 - (id) executableName;


@end
