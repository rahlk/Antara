FROM ubuntu:18.04

MAINTAINER helpacksi <oo.helpacksi@gmail.com>

#----- Install packages -----
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
    xz-utils \
    vim \
    curl \
    build-esstential \
    libxml2-devi \ 
    libcurl4-openssl-dev \
    openjdk-8-jdk       \
    git maven bc        \
    openssh-server wget \
    build-essential     && \
    apt-get clean  && \
    rm -rf /var/lib/apt/lists/*

#----- INSTALL ANACONDA (MINICONDA) -----
RUN curl -LO http://repo.continuum.io/miniconda/Miniconda3-latest-Linux-x86_64.sh
RUN bash Miniconda3-latest-Linux-x86_64.sh -p /opt/miniconda -b
RUN rm Miniconda3-latest-Linux-x86_64.sh
ENV PATH=/opt/miniconda/bin:${PATH}
RUN conda update -y conda
RUN conda install -c anaconda -y pip 


#----- INSTALL CLANG -----
RUN curl -SL https://github.com/llvm/llvm-project/releases/download/llvmorg-10.0.0/clang+llvm-10.0.0-x86_64-linux-gnu-ubuntu-18.04.tar.xz | tar -xJC . && \
    mv clang+llvm-10.0.0-x86_64-linux-gnu-ubuntu-18.04 /opt/LLVM10

#----- INSTALL PYTHON DEPENDENCIES-----
RUN pip install setuptools && \
    pip install numpy scipy pandas networkx tqdm matplotlib graphviz pydot scikit-learn nltk deepwalk gensim pydotplus tabulate

# ----- This for debug only -----
RUN wget -O ~/.vimrc https://gist.githubusercontent.com/rahlk/78d3d8f188a099dfd5114c35176e391d/raw/ed47d4fee79b5e177cb008abb319ebe4b542fc75/.vimrc

#----- Set environment variable -----
RUN echo "export PATH=/opt/miniconda/bin:/opt/LLVM10/bin:$PATH" >> ~/.bashrc && \
    echo "export LD_LIBRARY_PATH=/LLVM_ROOT/lib" >> ~/.bashrc && \
    echo "export PYTHONDONTWRITEBYTECODE=1" >> ~/.bashrc && \
    echo "export PYTHONIOENCODING=utf8" >> ~/.bashrc && \
    echo "export PROJECT_ROOT=/workspace/antara/" >> ~/.bashrc && \
    echo "export COMPILER_ROOT=/workspace/antara/antara-clang-cc/" >> ~/.bashrc && \
    echo "export PROGRAMS_ROOT=/workspace/antara/programs" >> ~/.bashrc && \
    echo "export GRAPH_ALIGN_ROOT=/workspace/antara/antara-align-cfg" >> ~/.bashrc && \
    echo "export PS1='\[\033[38;5;9m\]\u\[$(tput sgr0)\]:$(tput sgr0)\]\[\033[38;5;214m\]\w\[$(tput sgr0)\\$ \[$(tput sgr0)\]'" >> ~/.bashrc && \
    # Add some aliases to bashrc
    echo "alias ..='cd ..'" > ~/.bashrc && \
    echo "alias ...='cd ../..'" 
# If there are multiple matches for completion, Tab should cycle through them
bind 'TAB':menu-complete
# Display a list of the matching files
bind "set show-all-if-ambiguous on"
# Perform partial completion on the first Tab press,
# only start cycling full results on the second Tab press
bind "set menu-complete-display-prefix on"
# Cycle through history based on characters already typed on the line
bind '"\e[A":history-search-backward'
bind '"\e[B":history-search-forward'


# ----- Update git credentials -----
RUN git config --global user.name "helpacksi" && \
    git config --global user.email "oo.helpacksi@gmail.com"

CMD ["sh -c bash"]
