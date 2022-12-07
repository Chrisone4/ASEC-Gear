class TFN_MT
{
    options[] = { "_comtac", "_cover", "_h6", "_manta", "_scrim", "_teccharge" }; // Always computed, do not edit
    label = "[ASEC] Opscore Maritime";
    class _comtac
    {
        label = "_comtac";
        alwaysSelectable = 1;
        values[] = { "AMPs", "FDE", "Green", "none" }; // Always computed, do not edit
    };
    class _cover
    {
        label = "_cover";
        alwaysSelectable = 1;
        values[] = { "AC1", "AC2", "ACL1", "ACL2", "C1", "C2", "CL", "CL2" }; // Always computed, do not edit
    };
    class _h6
    {
        label = "_h6";
        alwaysSelectable = 1;
        values[] = { "Helstar Strobe", "none", "Off" }; // Always computed, do not edit
    };
    class _manta
    {
        label = "_manta";
        alwaysSelectable = 1;
        values[] = { "Amp Manta", "Manta Strobe", "none", "Off" }; // Always computed, do not edit
    };
    class _scrim
    {
        label = "_scrim";
        alwaysSelectable = 1;
        values[] = { "AMP Scrim", "Amp Scrim 2", "none", "Scrim", "Scrim 2" }; // Always computed, do not edit
    };
    class _teccharge
    {
        label = "_teccharge";
        alwaysSelectable = 1;
        values[] = { "Amp Light On", "none" }; // Always computed, do not edit
    };
};
