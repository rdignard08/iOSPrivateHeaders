
@protocol NSCoding;
@interface UIImageNibPlaceholder : UIImage <NSCoding> {

    NSString* runtimeResourceName;
}

 - (void) dealloc;
 - (id) initWithContentsOfFile:(id)a andRuntimeResourceName:(id)b ;
 - (id) initWithData:(id)a andRuntimeResourceName:(id)b ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
