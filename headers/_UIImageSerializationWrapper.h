
@protocol NSCoding;
@interface _UIImageSerializationWrapper : NSObject <NSCoding> {

    UIImage* _image;
}

 - (Class) classForCoder;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithImage:(id)a;


@end
