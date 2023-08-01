//----- (100087B0) --------------------------------------------------------
size_t __thiscall ReadPod(unk1 *this, unsigned int argList, void *buffer)
{
  unsigned int *offsetAndElementCount; // edi

  if ( argList >= this->cNumPods )
    writeToRandomBufferAndExit("ReadPod: %i >= cNumPods", argList);
  offsetAndElementCount = (unsigned int *)(this->field_18 + 76 * argList);
  fseek(this->fp, *offsetAndElementCount, SEEK_SET);
  return sub_10008C60(this->fp, buffer, offsetAndElementCount[1]);
}
