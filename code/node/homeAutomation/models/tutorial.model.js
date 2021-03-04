module.exports = mongoose => {
    const Tutorial = mongoose.model(
      "tutorial",
      mongoose.Schema(
        {
          state: Boolean
        },
        { timestamps: true }
      )
    );
  
    return Tutorial;
  };