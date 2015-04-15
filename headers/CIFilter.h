
@protocol NSCoding, NSCopying;
@interface CIFilter : NSObject <NSCoding, NSCopying> {

    [8^v] _priv;
}
@property (nonatomic, assign, readonly) CIImage* outputImage;
 + (id) customAttributes;
 + (id) filterWithName:(id)a;
 + (id) filterNamesInCategories:(id)a;
 + (id) _propertyArrayFromFilters:(id)ainputImageExtent:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 + (id) _filterArrayFromProperties:(id)ainputImageExtent:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 + (id) filterWithName:(id)akeysAndValues:(id)b;
 + (id) filterWithName:(id)awithInputParameters:(id)b;
 + (id) filterNamesInCategory:(id)a;
 + (id) serializedXMPFromFilters:(id)ainputImageExtent:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 + (id) filterArrayFromSerializedXMP:(id)ainputImageExtent:({CGRect={CGPoint=dd}{CGSize=dd}})berror:(^@)c;
 + (id) filterWithString:(id)a;
 + (^{CGImageMetadata=}) _imageMetadataFromFilters:(id)ainputImageExtent:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 + (id) _filterArrayFromImageMetadata:(^{CGImageMetadata=})ainputImageExtent:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 + (id) _filterArrayFromProperties:(id)a;

 - (id) valueForUndefinedKey:(id)a ;
 - (void) setValue:(id)a forUndefinedKey:(id)b ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (id) name;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) attributes;
 - (void) setDefaults;
 - (id) outputImage;
 - (BOOL) _isIdentity;
 - (id) inputKeys;
 - (id) _filterClassDescription;
 - (id) outputKeys;
 - (id) _copyFilterWithZone:(^{_NSZone=})a ;
 - (BOOL) _filterClassInCategory:(id)a ;
 - (id) _serializedXMPString;
 - (id) apply:(id)a arguments:(id)b options:(id)c ;
 - (id) apply:(id)a ;


@end
