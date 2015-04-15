
@interface PRAutocorrectionContext : NSObject {

}
 + (id) autocorrectionContextOfType:(unsigned long long)a;

 - (void) reset;
 - (void) addInputCharacter:(unsigned short)ageometryModel:(^v)bgeometryData:(id)c;
 - (id) currentModifications;
 - (id) addedModifications;
 - (id) removedModifications;
 - (void) addInputCharacter:(unsigned short)ageometryData:(id)b;
 - (id) prefixes;
 - (void) setValidSequenceCorrectionThreshold:(double)a;
 - (double) validSequenceCorrectionThreshold;


@end
