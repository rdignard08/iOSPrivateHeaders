
@protocol NSCopying, NSCoding;
@interface CALight : NSObject <NSCopying, NSCoding> {

    ^v _attr;
    ^v _priv;
}
@property (atomic, copy, readwrite) NSString* type;
@property (atomic, copy, readwrite) NSString* name;
@property (atomic, assign, readwrite, getter=isEnabled) NSNumber* enabled;
@property (atomic, assign, readwrite) NSNumber* color;
@property (atomic, assign, readwrite) NSNumber* intensity;
@property (atomic, assign, readwrite) NSNumber* ambientIntensity;
@property (atomic, assign, readwrite) NSNumber* diffuseIntensity;
@property (atomic, assign, readwrite) NSNumber* specularIntensity;
@property (atomic, assign, readwrite) NSNumber* direction;
@property (atomic, retain, readwrite) NSNumber* image;
@property (atomic, assign, readwrite) NSNumber* imageRotation;
@property (atomic, copy, readwrite) NSString* imageBlendMode;
@property (atomic, assign, readwrite) NSNumber* imageNormalAngle;
@property (atomic, assign, readwrite) NSNumber* position;
@property (atomic, assign, readwrite) NSNumber* falloffDistance;
@property (atomic, assign, readwrite) NSNumber* falloff;
@property (atomic, assign, readwrite) NSNumber* coneAngle;
@property (atomic, assign, readwrite) NSNumber* coneEdgeSoftness;
 + (id) defaultValueForKey:(id)a;
 + (void) CAMLParserStartElement:(id)a;
 + (id) lightWithType:(id)a;
 + (id) CA_CAMLPropertyForKey:(id)a;

 - (void) setValue:(id)a forKeyPath:(id)b ;
 - ({CAPoint3D=ddd}) position;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) setType:(id)a ;
 - (void) setValue:(id)a forKey:(id)b ;
 - (id) name;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) type;
 - (id) valueForKey:(id)a ;
 - (id) valueForKeyPath:(id)a ;
 - (void) setName:(id)a ;
 - (void) setImage:(id)a ;
 - (void) setColor:(^{CGColor=})a ;
 - (void) setDirection:({CAPoint3D=ddd})a ;
 - ({CAPoint3D=ddd}) direction;
 - (void) CAMLParser:(id)a setValue:(id)b forKey:(id)c ;
 - (void) encodeWithCAMLWriter:(id)a ;
 - (id) CAMLTypeForKey:(id)a ;
 - (^{Object=^^?{Atomic={?=i}}}) CA_copyRenderValue;
 - (BOOL) shouldArchiveValueForKey:(id)a ;
 - (id) initWithType:(id)a ;
 - (^{CGColor=}) color;
 - (void) setPosition:({CAPoint3D=ddd})a ;
 - (double) intensity;
 - (void) setIntensity:(double)a ;
 - (double) ambientIntensity;
 - (void) setAmbientIntensity:(double)a ;
 - (double) diffuseIntensity;
 - (void) setDiffuseIntensity:(double)a ;
 - (double) specularIntensity;
 - (void) setSpecularIntensity:(double)a ;
 - (double) falloffDistance;
 - (void) setFalloffDistance:(double)a ;
 - (double) coneAngle;
 - (void) setConeAngle:(double)a ;
 - (double) coneEdgeSoftness;
 - (void) setConeEdgeSoftness:(double)a ;
 - (double) imageRotation;
 - (void) setImageRotation:(double)a ;
 - (double) imageNormalAngle;
 - (void) setImageNormalAngle:(double)a ;
 - (id) imageBlendMode;
 - (void) setImageBlendMode:(id)a ;
 - (id) image;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a ;
 - (double) falloff;
 - (void) setFalloff:(double)a ;


@end
