
@protocol NSCoding;
@interface CACodingProxy : NSObject <NSCoding> {

}

 - (id) initWithObject:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) decodedObject;


@end
