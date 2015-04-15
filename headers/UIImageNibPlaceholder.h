
@protocol NSCoding;
@interface UIImageNibPlaceholder : UIImage <NSCoding> {

    @"NSString" runtimeResourceName;
}

 - (void) dealloc;
 - (id) initWithContentsOfFile:(id)aandRuntimeResourceName:(id)b;
 - (id) initWithData:(id)aandRuntimeResourceName:(id)b;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
