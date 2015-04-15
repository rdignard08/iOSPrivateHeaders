
@interface Protocol : NSObject {

}
 + (void) load;

 - (BOOL) conformsTo:(id)a ;
 - (^{objc_method_description=:*}) descriptionForInstanceMethod:(SEL)a ;
 - (^{objc_method_description=:*}) descriptionForClassMethod:(SEL)a ;
 - (r*) name;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;


@end
