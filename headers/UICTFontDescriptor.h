
@interface UICTFontDescriptor : UIFontDescriptor {

}
 + (id) fontDescriptorWithFontAttributes:(id)a;
 + (id) fontDescriptorWithName:(id)asize:(d)b;
 + (id) fontDescriptorWithName:(id)amatrix:({CGAffineTransform=dddddd})b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) finalize;
 - (BOOL) retainWeakReference;
 - (BOOL) allowsWeakReference;
 - (id) objectForKey:(id)a;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) _cfTypeID;
 - (id) fontDescriptorByAddingAttributes:(id)a;
 - (id) fontAttributes;
 - (id) matchingFontDescriptorsWithMandatoryKeys:(id)a;
 - (id) matchingFontDescriptorWithMandatoryKeys:(id)a;


@end
