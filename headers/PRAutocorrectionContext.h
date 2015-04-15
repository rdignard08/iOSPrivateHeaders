
@interface PRAutocorrectionContext : NSObject {

}
 + (id) autocorrectionContextOfType:(Q)a;

 - (void) reset;
 - (void) addInputCharacter:(S)ageometryModel:(^v)bgeometryData:(id)c;
 - (id) currentModifications;
 - (id) addedModifications;
 - (id) removedModifications;
 - (void) addInputCharacter:(S)ageometryData:(id)b;
 - (id) prefixes;
 - (void) setValidSequenceCorrectionThreshold:(d)a;
 - (d) validSequenceCorrectionThreshold;


@end
