
@interface PRAutocorrectionContext : NSObject {

}
 + (id) autocorrectionContextOfType:(unsigned long long)a;

 - (void) reset;
 - (void) addInputCharacter:(unsigned short)a geometryModel:(^v)b geometryData:(id)c ;
 - (id) currentModifications;
 - (id) addedModifications;
 - (id) removedModifications;
 - (void) addInputCharacter:(unsigned short)a geometryData:(id)b ;
 - (id) prefixes;
 - (void) setValidSequenceCorrectionThreshold:(double)a ;
 - (double) validSequenceCorrectionThreshold;


@end
