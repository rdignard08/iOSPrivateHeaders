
@interface UICTFontDescriptor : UIFontDescriptor {

}
 + (id) fontDescriptorWithFontAttributes:(id)a;
 + (id) fontDescriptorWithName:(id)asize:(double)b;
 + (id) fontDescriptorWithName:(id)amatrix:({CGAffineTransform=dddddd})b;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) finalize;
 - (BOOL) retainWeakReference;
 - (BOOL) allowsWeakReference;
 - (id) objectForKey:(id)a ;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (unsigned long long) _cfTypeID;
 - (id) fontDescriptorByAddingAttributes:(id)a ;
 - (id) fontAttributes;
 - (id) matchingFontDescriptorsWithMandatoryKeys:(id)a ;
 - (id) matchingFontDescriptorWithMandatoryKeys:(id)a ;


@end
